
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hv_guest_mapping_flush {int address_space; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct hv_guest_mapping_flush*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(u64 VAR_5)
{
 struct hv_guest_mapping_flush **VAR_6;
 struct hv_guest_mapping_flush *VAR_7;
 u64 VAR_8;
 unsigned long VAR_9;
 int VAR_10 = -VAR_0;

 if (!VAR_3)
  goto fault;

 FUNC_2(VAR_9);

 VAR_6 = (struct hv_guest_mapping_flush **)
  FUNC_3(VAR_4);

 VAR_7 = *VAR_6;

 if (FUNC_5(!VAR_7)) {
  FUNC_1(VAR_9);
  goto fault;
 }

 VAR_7->address_space = VAR_5;
 VAR_7->flags = 0;

 VAR_8 = FUNC_0(VAR_1,
     VAR_7, ((void*)0));
 FUNC_1(VAR_9);

 if (!(VAR_8 & VAR_2))
  VAR_10 = 0;

fault:
 FUNC_4(VAR_5, VAR_10);
 return VAR_10;
}
