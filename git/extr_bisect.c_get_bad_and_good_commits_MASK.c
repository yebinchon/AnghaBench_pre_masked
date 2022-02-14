
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {int nr; scalar_t__ oid; } ;


 int FUNC_0 (struct commit**,int) ;
 scalar_t__ VAR_0 ;
 struct commit* FUNC_1 (struct repository*,scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static struct commit **FUNC_2(struct repository *VAR_2,
      int *VAR_3)
{
 struct commit **VAR_4;
 int VAR_5, VAR_6 = 0;

 FUNC_0(VAR_4, 1 + VAR_1.nr);
 VAR_4[VAR_6++] = FUNC_1(VAR_2, VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_1.nr; VAR_5++)
  VAR_4[VAR_6++] = FUNC_1(VAR_2, VAR_1.oid + VAR_5);
 *VAR_3 = VAR_6;

 return VAR_4;
}
