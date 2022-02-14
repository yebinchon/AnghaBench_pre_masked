
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {scalar_t__ status; int ready; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0 (struct connection *VAR_6) {
  if (VAR_6->status == VAR_0) {
    return VAR_6->ready = VAR_5;
  }


  if (VAR_6->status == VAR_2 || VAR_6->status == VAR_0) {
    return VAR_6->ready = VAR_4;
  }
  if (VAR_6->status == VAR_1 || VAR_6->ready == VAR_3) {
    return VAR_6->ready = VAR_3;
  }
  return VAR_6->ready = VAR_5;
}
