
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int boardname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct hfi1_devdata*,char*,unsigned long*,void**) ;

__attribute__((used)) static int FUNC_3(struct hfi1_devdata *VAR_2)
{

 const char VAR_3[] =
  "Intel Omni-Path Host Fabric Interface Adapter 100 Series";
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, "description", &VAR_4,
    (void **)&VAR_2->boardname);
 if (VAR_5) {
  FUNC_0(VAR_2, "Board description not found\n");

  VAR_2->boardname = FUNC_1(VAR_3, VAR_1);
  if (!VAR_2->boardname)
   return -VAR_0;
 }
 return 0;
}
