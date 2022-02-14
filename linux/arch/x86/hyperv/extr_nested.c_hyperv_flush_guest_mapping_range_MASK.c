
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hv_guest_mapping_flush_list {int address_space; scalar_t__ flags; } ;
typedef int (* hyperv_fill_flush_list_func ) (struct hv_guest_mapping_flush_list*,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,struct hv_guest_mapping_flush_list*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(u64 VAR_5,
  hyperv_fill_flush_list_func VAR_6, void *VAR_7)
{
 struct hv_guest_mapping_flush_list **VAR_8;
 struct hv_guest_mapping_flush_list *VAR_9;
 u64 VAR_10 = 0;
 unsigned long VAR_11;
 int VAR_12 = -VAR_0;
 int VAR_13 = 0;

 if (!VAR_3 || !VAR_6)
  goto fault;

 FUNC_2(VAR_11);

 VAR_8 = (struct hv_guest_mapping_flush_list **)
  FUNC_3(VAR_4);

 VAR_9 = *VAR_8;
 if (FUNC_5(!VAR_9)) {
  FUNC_1(VAR_11);
  goto fault;
 }

 VAR_9->address_space = VAR_5;
 VAR_9->flags = 0;

 VAR_13 = VAR_6(VAR_9, VAR_7);
 if (VAR_13 < 0) {
  FUNC_1(VAR_11);
  goto fault;
 }

 VAR_10 = FUNC_0(VAR_1,
         VAR_13, 0, VAR_9, ((void*)0));

 FUNC_1(VAR_11);

 if (!(VAR_10 & VAR_2))
  VAR_12 = 0;
 else
  VAR_12 = VAR_10;
fault:
 FUNC_4(VAR_5, VAR_12);
 return VAR_12;
}
