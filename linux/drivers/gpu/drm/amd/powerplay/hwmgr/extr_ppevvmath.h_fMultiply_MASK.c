
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {scalar_t__ real; scalar_t__ decimal; } ;
struct TYPE_7__ {scalar_t__ full; TYPE_1__ partial; } ;
typedef TYPE_2__ fInt ;



__attribute__((used)) static fInt FUNC_0 (fInt VAR_0, fInt VAR_1)
{
 fInt VAR_2;
 int64_t VAR_3;
 bool VAR_4, VAR_5;

 VAR_4 = (VAR_0.partial.real == 0 && VAR_0.partial.decimal != 0 && VAR_0.full >= 0);
 VAR_5 = (VAR_1.partial.real == 0 && VAR_1.partial.decimal != 0 && VAR_1.full >= 0);
 VAR_3 = ((int64_t)VAR_0.full) * ((int64_t)VAR_1.full);
 VAR_3 = VAR_3 >> 16;
 VAR_2.full = (int)VAR_3;

 return VAR_2;
}
