
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int debug; int debug_dir; void* debug_events; void* debug_rdesc; } ;


 int FUNC_0 (char const*,int ) ;
 void* FUNC_1 (char*,int,int ,struct hid_device*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct hid_device *VAR_3, const char *VAR_4)
{
 VAR_3->debug_dir = FUNC_0(VAR_4, VAR_2);
 VAR_3->debug_rdesc = FUNC_1("rdesc", 0400,
   VAR_3->debug_dir, VAR_3, &VAR_1);
 VAR_3->debug_events = FUNC_1("events", 0400,
   VAR_3->debug_dir, VAR_3, &VAR_0);
 VAR_3->debug = 1;
}
