
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_operation {int speed; int ccode; int lzs_flag; int begin_file; int end_file; int csum; scalar_t__ compcode; scalar_t__ history_len; int format; int flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct zip_operation *VAR_3,
        int VAR_4)
{
 VAR_3->flush = VAR_1;


 VAR_3->speed = 1;

 if (!VAR_4) {
  VAR_3->ccode = 0;
  VAR_3->lzs_flag = 0;
  VAR_3->format = VAR_2;
 } else {
  VAR_3->ccode = 3;
  VAR_3->lzs_flag = 1;
  VAR_3->format = VAR_0;
 }
 VAR_3->begin_file = 1;
 VAR_3->history_len = 0;
 VAR_3->end_file = 1;
 VAR_3->compcode = 0;
 VAR_3->csum = 1;
}
