
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ng_btsocket_hci_raw_node_neighbor_cache {int num_entries; TYPE_1__* entries; } ;
typedef int r ;
typedef int ng_hci_node_neighbor_cache_entry_ep ;
typedef int addrtype2str ;
struct TYPE_3__ {int addrtype; int* features; int clock_offset; int page_scan_mode; int page_scan_rep_mode; int extinq_size; int extinq_data; int bdaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int ,struct ng_btsocket_hci_raw_node_neighbor_cache*,int) ;
 int FUNC_6 (struct ng_btsocket_hci_raw_node_neighbor_cache*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(int VAR_7, int VAR_8, char **VAR_9)
{
 struct ng_btsocket_hci_raw_node_neighbor_cache VAR_10;
 int VAR_11, VAR_12 = VAR_3;
 const char *VAR_13[] = {"B", "P", "R", "E"};

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.num_entries = VAR_2;
 VAR_10.entries = FUNC_0(VAR_2,
    sizeof(ng_hci_node_neighbor_cache_entry_ep));
 if (VAR_10.entries == ((void*)0)) {
  VAR_5 = VAR_0;
  return (VAR_1);
 }

 if (FUNC_5(VAR_7, VAR_4, &VAR_10,
   sizeof(VAR_10)) < 0) {
  VAR_12 = VAR_1;
  goto out;
 }

 FUNC_1(VAR_6,
"T " "BD_ADDR           " "Features                " "Clock offset " "Page scan " "Rep. scan\n");






 for (VAR_11 = 0; VAR_11 < VAR_10.num_entries; VAR_11++) {
         uint8_t VAR_14 = VAR_10.entries[VAR_11].addrtype;
  if(VAR_14 >= sizeof(VAR_13)/sizeof(VAR_13[0]))
   VAR_14 = sizeof(VAR_13)/sizeof(VAR_13[0]) - 1;
  FUNC_1(VAR_6,
"%1s %-17.17s " "%02x %02x %02x %02x %02x %02x %02x %02x " "%#12x " "%#9x " "%#9x\n",




   VAR_13[VAR_14],
   FUNC_3(&VAR_10.entries[VAR_11].bdaddr),
   VAR_10.entries[VAR_11].features[0], VAR_10.entries[VAR_11].features[1],
   VAR_10.entries[VAR_11].features[2], VAR_10.entries[VAR_11].features[3],
   VAR_10.entries[VAR_11].features[4], VAR_10.entries[VAR_11].features[5],
   VAR_10.entries[VAR_11].features[6], VAR_10.entries[VAR_11].features[7],
   VAR_10.entries[VAR_11].clock_offset, VAR_10.entries[VAR_11].page_scan_mode,
   VAR_10.entries[VAR_11].page_scan_rep_mode);
  FUNC_4(VAR_10.entries[VAR_11].extinq_data,
        VAR_10.entries[VAR_11].extinq_size);
  FUNC_1(VAR_6,"\n");
 }
out:
 FUNC_2(VAR_10.entries);

 return (VAR_12);
}
