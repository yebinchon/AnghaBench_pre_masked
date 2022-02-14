
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_filedata {int dummy; } ;
struct hfi1_ctxtdata {int dummy; } ;


 int FUNC_0 (struct hfi1_filedata*,struct hfi1_ctxtdata*) ;
 int FUNC_1 (struct hfi1_ctxtdata*,struct hfi1_filedata*) ;
 int FUNC_2 (struct hfi1_filedata*,struct hfi1_ctxtdata*) ;

__attribute__((used)) static int FUNC_3(struct hfi1_filedata *VAR_0,
     struct hfi1_ctxtdata *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0, VAR_1);

 return VAR_2;
}
