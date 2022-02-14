
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct ident_split {scalar_t__ tz_begin; scalar_t__ tz_end; scalar_t__ date_begin; scalar_t__ date_end; } ;
struct date_mode {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int) ;
 char const* FUNC_2 (scalar_t__,long,struct date_mode const*) ;
 long FUNC_3 (scalar_t__,int *,int) ;

const char *FUNC_4(const struct ident_split *VAR_2,
       const struct date_mode *VAR_3)
{
 timestamp_t VAR_4 = 0;
 long VAR_5 = 0;

 if (VAR_2->date_begin && VAR_2->date_end)
  VAR_4 = FUNC_1(VAR_2->date_begin, ((void*)0), 10);
 if (FUNC_0(VAR_4))
  VAR_4 = 0;
 else {
  if (VAR_2->tz_begin && VAR_2->tz_end)
   VAR_5 = FUNC_3(VAR_2->tz_begin, ((void*)0), 10);
  if (VAR_5 >= VAR_0 || VAR_5 <= VAR_1)
   VAR_5 = 0;
 }
 return FUNC_2(VAR_4, VAR_5, VAR_3);
}
