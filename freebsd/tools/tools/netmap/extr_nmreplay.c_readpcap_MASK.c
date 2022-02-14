
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u_long ;
struct q_pkt {int dummy; } ;
struct pcap_file_header {int dummy; } ;
struct nm_pcap_file {scalar_t__ fd; int filesize; scalar_t__ data; scalar_t__ cur; scalar_t__ lim; scalar_t__ err; int swap; int resolution; scalar_t__ tot_pkt; scalar_t__ first_ts; int tot_bytes; int total_tx_time; int tot_bytes_rounded; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct nm_pcap_file*,int) ;
 struct nm_pcap_file* FUNC_4 (int,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (char const*,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct nm_pcap_file*,int) ;

__attribute__((used)) static struct nm_pcap_file *
FUNC_11(const char *VAR_7)
{
    struct nm_pcap_file VAR_8, *VAR_9 = &VAR_8;
    uint64_t VAR_10, VAR_11;
    uint32_t VAR_12, VAR_13 = 0;

    FUNC_3(VAR_9, sizeof(*VAR_9));
    VAR_9->fd = FUNC_8(VAR_7, VAR_3);
    if (VAR_9->fd < 0) {
 FUNC_1("cannot open file %s", VAR_7);
 return ((void*)0);
    }

    VAR_9->filesize = FUNC_6(VAR_9->fd, 0, VAR_5);
    FUNC_6(VAR_9->fd, 0, VAR_6);
    FUNC_0("filesize is %lu", (u_long)(VAR_9->filesize));
    if (VAR_9->filesize < sizeof(struct pcap_file_header)) {
 FUNC_1("file too short %s", VAR_7);
 FUNC_5(VAR_9->fd);
 return ((void*)0);
    }
    VAR_9->data = FUNC_7(((void*)0), VAR_9->filesize, VAR_4, VAR_1, VAR_9->fd, 0);
    if (VAR_9->data == VAR_0) {
 FUNC_1("cannot mmap file %s", VAR_7);
 FUNC_5(VAR_9->fd);
 return ((void*)0);
    }
    VAR_9->cur = VAR_9->data;
    VAR_9->lim = VAR_9->data + VAR_9->filesize;
    VAR_9->err = 0;
    VAR_9->swap = 0;

    VAR_12 = FUNC_10(VAR_9, 4);
    FUNC_0("magic is 0x%x", VAR_12);
    switch (VAR_12) {
    case 0xa1b2c3d4:
 VAR_9->swap = 0;
 VAR_9->resolution = 1000;
 break;
    case 0xd4c3b2a1:
 VAR_9->swap = 1;
 VAR_9->resolution = 1000;
 break;
    case 0xa1b23c4d:
 VAR_9->swap = 0;
 VAR_9->resolution = 1;
 break;
    case 0x4d3cb2a1:
 VAR_9->swap = 1;
 VAR_9->resolution = 1;
 break;
    default:
 FUNC_1("unknown magic 0x%x", VAR_12);
 return ((void*)0);
    }

    FUNC_0("swap %d res %d\n", VAR_9->swap, VAR_9->resolution);
    VAR_9->cur = VAR_9->data + sizeof(struct pcap_file_header);
    VAR_9->lim = VAR_9->data + VAR_9->filesize;
    VAR_9->err = 0;
    VAR_10 = 0;
    while (VAR_9->cur < VAR_9->lim && VAR_9->err == 0) {
 uint32_t VAR_14 = VAR_9->cur - VAR_9->data;
 uint64_t VAR_15 = FUNC_10(VAR_9, 4) * VAR_2 +
  FUNC_10(VAR_9, 4) * VAR_9->resolution;
 uint32_t VAR_16 = FUNC_10(VAR_9, 4);
 uint32_t VAR_17 = FUNC_10(VAR_9, 4);

 if (VAR_9->err) {
     FUNC_2("end of pcap file after %d packets\n",
  (int)VAR_9->tot_pkt);
     break;
 }
 if (VAR_15 < VAR_10) {
     FUNC_2("reordered packet %d\n",
  (int)VAR_9->tot_pkt);
 }
 VAR_10 = VAR_15;
 (void)VAR_14;
 if (VAR_9->tot_pkt == 0) {
     VAR_9->first_ts = VAR_15;
     VAR_13 = VAR_17;
 }
 VAR_9->tot_pkt++;
 VAR_9->tot_bytes += VAR_17;
 VAR_9->tot_bytes_rounded += FUNC_9(VAR_17) + sizeof(struct q_pkt);
 VAR_9->cur += VAR_16;
    }
    VAR_9->total_tx_time = VAR_10 - VAR_9->first_ts;
    FUNC_0("tot_pkt %lu tot_bytes %lu tx_time %.6f s first_len %lu",
 (u_long)VAR_9->tot_pkt, (u_long)VAR_9->tot_bytes,
 1e-9*VAR_9->total_tx_time, (u_long)VAR_13);
    if (VAR_9->tot_bytes == VAR_13) {

 VAR_11 = VAR_13 * 8;
    } else {
 VAR_11 = VAR_9->total_tx_time * VAR_13 / (VAR_9->tot_bytes - VAR_13);
    }
    FUNC_0("first_pkt_time %.6f s", 1e-9*VAR_11);
    VAR_9->total_tx_time += VAR_11;
    VAR_9->first_ts -= VAR_11;


    VAR_9 = FUNC_4(1, sizeof(*VAR_9));
    *VAR_9 = VAR_8;

    VAR_9->cur = VAR_9->data + sizeof(struct pcap_file_header);
    VAR_9->err = 0;
    return VAR_9;
}
