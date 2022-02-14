
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* client; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_5__ {int* stats; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;
typedef TYPE_3__ gclient_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;

int FUNC_1 (gentity_t *VAR_3, int VAR_4, int VAR_5)
{
 gclient_t *VAR_6;
 int VAR_7;
 int VAR_8;

 if (!VAR_4)
  return 0;

 VAR_6 = VAR_3->client;

 if (!VAR_6)
  return 0;

 if (VAR_5 & VAR_1)
  return 0;


 VAR_8 = VAR_6->ps.stats[VAR_2];
 VAR_7 = FUNC_0( VAR_4 * VAR_0 );
 if (VAR_7 >= VAR_8)
  VAR_7 = VAR_8;

 if (!VAR_7)
  return 0;

 VAR_6->ps.stats[VAR_2] -= VAR_7;

 return VAR_7;
}
