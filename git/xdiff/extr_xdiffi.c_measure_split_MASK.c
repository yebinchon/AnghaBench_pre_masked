
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long nrec; int * recs; } ;
typedef TYPE_1__ xdfile_t ;
struct split_measurement {int end_of_file; int indent; scalar_t__ pre_blank; int pre_indent; scalar_t__ post_blank; int post_indent; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const xdfile_t *VAR_1, long VAR_2,
     struct split_measurement *VAR_3)
{
 long VAR_4;

 if (VAR_2 >= VAR_1->nrec) {
  VAR_3->end_of_file = 1;
  VAR_3->indent = -1;
 } else {
  VAR_3->end_of_file = 0;
  VAR_3->indent = FUNC_0(VAR_1->recs[VAR_2]);
 }

 VAR_3->pre_blank = 0;
 VAR_3->pre_indent = -1;
 for (VAR_4 = VAR_2 - 1; VAR_4 >= 0; VAR_4--) {
  VAR_3->pre_indent = FUNC_0(VAR_1->recs[VAR_4]);
  if (VAR_3->pre_indent != -1)
   break;
  VAR_3->pre_blank += 1;
  if (VAR_3->pre_blank == VAR_0) {
   VAR_3->pre_indent = 0;
   break;
  }
 }

 VAR_3->post_blank = 0;
 VAR_3->post_indent = -1;
 for (VAR_4 = VAR_2 + 1; VAR_4 < VAR_1->nrec; VAR_4++) {
  VAR_3->post_indent = FUNC_0(VAR_1->recs[VAR_4]);
  if (VAR_3->post_indent != -1)
   break;
  VAR_3->post_blank += 1;
  if (VAR_3->post_blank == VAR_0) {
   VAR_3->post_indent = 0;
   break;
  }
 }
}
