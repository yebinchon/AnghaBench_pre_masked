
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_struct {int partno; scalar_t__ policy; } ;
struct bio {int bi_opf; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct bio*,char*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int const) ;

__attribute__((used)) static inline bool FUNC_6(struct bio *VAR_1, struct hd_struct *VAR_2)
{
 const int VAR_3 = FUNC_2(VAR_1);

 if (VAR_2->policy && FUNC_5(VAR_3)) {
  char VAR_4[VAR_0];

  if (FUNC_4(VAR_1->bi_opf) && !FUNC_3(VAR_1))
   return 0;

  FUNC_0(1,
         "generic_make_request: Trying to write "
   "to read-only block-device %s (partno %d)\n",
   FUNC_1(VAR_1, VAR_4), VAR_2->partno);

  return 0;
 }

 return 0;
}
