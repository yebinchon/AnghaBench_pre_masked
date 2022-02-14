
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct split_score {int penalty; int effective_indent; } ;
struct split_measurement {int pre_indent; int pre_blank; int indent; int post_blank; int post_indent; scalar_t__ end_of_file; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(const struct split_measurement *VAR_10, struct split_score *VAR_11)
{




 int VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_10->pre_indent == -1 && VAR_10->pre_blank == 0)
  VAR_11->penalty += VAR_8;

 if (VAR_10->end_of_file)
  VAR_11->penalty += VAR_0;





 VAR_12 = (VAR_10->indent == -1) ? 1 + VAR_10->post_blank : 0;
 VAR_13 = VAR_10->pre_blank + VAR_12;


 VAR_11->penalty += VAR_9 * VAR_13;
 VAR_11->penalty += VAR_1 * VAR_12;

 if (VAR_10->indent != -1)
  VAR_14 = VAR_10->indent;
 else
  VAR_14 = VAR_10->post_indent;

 VAR_15 = (VAR_13 != 0);


 VAR_11->effective_indent += VAR_14;

 if (VAR_14 == -1) {

 } else if (VAR_10->pre_indent == -1) {

 } else if (VAR_14 > VAR_10->pre_indent) {



  VAR_11->penalty += VAR_15 ?
   VAR_5 :
   VAR_4;
 } else if (VAR_14 == VAR_10->pre_indent) {




 } else {







  if (VAR_10->post_indent != -1 && VAR_10->post_indent > VAR_14) {




   VAR_11->penalty += VAR_15 ?
    VAR_7 :
    VAR_6;
  } else {



   VAR_11->penalty += VAR_15 ?
    VAR_3 :
    VAR_2;
  }
 }
}
