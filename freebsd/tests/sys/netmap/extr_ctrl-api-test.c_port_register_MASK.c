
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_register {unsigned long long nr_mem_id; int nr_mode; int nr_ringid; scalar_t__ nr_flags; unsigned long long nr_tx_slots; unsigned long long nr_rx_slots; unsigned long long nr_tx_rings; unsigned long long nr_host_tx_rings; unsigned long long nr_host_rx_rings; unsigned long long nr_rx_rings; unsigned long long nr_extra_bufs; scalar_t__ nr_memsize; scalar_t__ nr_offset; } ;
struct nmreq_header {uintptr_t nr_body; uintptr_t nr_options; int nr_reqtype; } ;
struct TestContext {int nr_mode; int nr_ringid; scalar_t__ nr_flags; unsigned long long nr_mem_id; unsigned long long nr_tx_slots; unsigned long long nr_rx_slots; unsigned long long nr_tx_rings; unsigned long long nr_host_tx_rings; unsigned long long nr_host_rx_rings; unsigned long long nr_rx_rings; unsigned long long nr_extra_bufs; int fd; scalar_t__ nr_opt; int ifname_ext; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct nmreq_header*) ;
 int FUNC_1 (struct nmreq_register*,int ,int) ;
 int FUNC_2 (struct nmreq_header*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned long long,...) ;

__attribute__((used)) static int
FUNC_5(struct TestContext *VAR_2)
{
 struct nmreq_register VAR_3;
 struct nmreq_header VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_4("Testing NETMAP_REQ_REGISTER(mode=%d,ringid=%d,"
        "flags=0x%llx) on '%s'\n",
        VAR_2->nr_mode, VAR_2->nr_ringid, (unsigned long long)VAR_2->nr_flags,
        VAR_2->ifname_ext);

 FUNC_2(&VAR_4, VAR_2->ifname_ext);
 VAR_4.nr_reqtype = VAR_0;
 VAR_4.nr_body = (uintptr_t)&VAR_3;
 VAR_4.nr_options = (uintptr_t)VAR_2->nr_opt;
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.nr_mem_id = VAR_2->nr_mem_id;
 VAR_3.nr_mode = VAR_2->nr_mode;
 VAR_3.nr_ringid = VAR_2->nr_ringid;
 VAR_3.nr_flags = VAR_2->nr_flags;
 VAR_3.nr_tx_slots = VAR_2->nr_tx_slots;
 VAR_3.nr_rx_slots = VAR_2->nr_rx_slots;
 VAR_3.nr_tx_rings = VAR_2->nr_tx_rings;
 VAR_3.nr_host_tx_rings = VAR_2->nr_host_tx_rings;
 VAR_3.nr_host_rx_rings = VAR_2->nr_host_rx_rings;
 VAR_3.nr_rx_rings = VAR_2->nr_rx_rings;
 VAR_3.nr_extra_bufs = VAR_2->nr_extra_bufs;
 VAR_6 = FUNC_0(VAR_2->fd, VAR_1, &VAR_4);
 if (VAR_6 != 0) {
  FUNC_3("ioctl(/dev/netmap, NIOCCTRL, REGISTER)");
  return VAR_6;
 }
 FUNC_4("nr_offset 0x%llx\n", (unsigned long long)VAR_3.nr_offset);
 FUNC_4("nr_memsize %llu\n", (unsigned long long)VAR_3.nr_memsize);
 FUNC_4("nr_tx_slots %u\n", VAR_3.nr_tx_slots);
 FUNC_4("nr_rx_slots %u\n", VAR_3.nr_rx_slots);
 FUNC_4("nr_tx_rings %u\n", VAR_3.nr_tx_rings);
 FUNC_4("nr_rx_rings %u\n", VAR_3.nr_rx_rings);
 FUNC_4("nr_host_tx_rings %u\n", VAR_3.nr_host_tx_rings);
 FUNC_4("nr_host_rx_rings %u\n", VAR_3.nr_host_rx_rings);
 FUNC_4("nr_mem_id %u\n", VAR_3.nr_mem_id);
 FUNC_4("nr_extra_bufs %u\n", VAR_3.nr_extra_bufs);

 VAR_5 = VAR_3.nr_memsize && (VAR_2->nr_mode == VAR_3.nr_mode) &&
         (VAR_2->nr_ringid == VAR_3.nr_ringid) &&
         (VAR_2->nr_flags == VAR_3.nr_flags) &&
         ((!VAR_2->nr_tx_slots && VAR_3.nr_tx_slots) ||
   (VAR_2->nr_tx_slots == VAR_3.nr_tx_slots)) &&
         ((!VAR_2->nr_rx_slots && VAR_3.nr_rx_slots) ||
   (VAR_2->nr_rx_slots == VAR_3.nr_rx_slots)) &&
         ((!VAR_2->nr_tx_rings && VAR_3.nr_tx_rings) ||
   (VAR_2->nr_tx_rings == VAR_3.nr_tx_rings)) &&
         ((!VAR_2->nr_rx_rings && VAR_3.nr_rx_rings) ||
   (VAR_2->nr_rx_rings == VAR_3.nr_rx_rings)) &&
         ((!VAR_2->nr_host_tx_rings && VAR_3.nr_host_tx_rings) ||
   (VAR_2->nr_host_tx_rings == VAR_3.nr_host_tx_rings)) &&
         ((!VAR_2->nr_host_rx_rings && VAR_3.nr_host_rx_rings) ||
   (VAR_2->nr_host_rx_rings == VAR_3.nr_host_rx_rings)) &&
         ((!VAR_2->nr_mem_id && VAR_3.nr_mem_id) ||
   (VAR_2->nr_mem_id == VAR_3.nr_mem_id)) &&
         (VAR_2->nr_extra_bufs == VAR_3.nr_extra_bufs);
 if (!VAR_5) {
  return -1;
 }


 VAR_2->nr_tx_slots = VAR_3.nr_tx_slots;
 VAR_2->nr_rx_slots = VAR_3.nr_rx_slots;
 VAR_2->nr_tx_rings = VAR_3.nr_tx_rings;
 VAR_2->nr_rx_rings = VAR_3.nr_rx_rings;
 VAR_2->nr_host_tx_rings = VAR_3.nr_host_tx_rings;
 VAR_2->nr_host_rx_rings = VAR_3.nr_host_rx_rings;
 VAR_2->nr_mem_id = VAR_3.nr_mem_id;
 VAR_2->nr_extra_bufs = VAR_3.nr_extra_bufs;

 return 0;
}
