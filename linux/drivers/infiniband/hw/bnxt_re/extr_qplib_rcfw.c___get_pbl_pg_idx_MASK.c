
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_pbl {scalar_t__ pg_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_0(struct bnxt_qplib_pbl *VAR_12)
{
 return (VAR_12->pg_size == VAR_8 ?
          VAR_2 :
  VAR_12->pg_size == VAR_10 ?
          VAR_4 :
  VAR_12->pg_size == VAR_9 ?
          VAR_3 :
  VAR_12->pg_size == VAR_7 ?
          VAR_1 :
  VAR_12->pg_size == VAR_11 ?
          VAR_5 :
  VAR_12->pg_size == VAR_6 ?
          VAR_0 :
          VAR_2);
}
