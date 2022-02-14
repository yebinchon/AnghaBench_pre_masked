
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int32_t ;
struct secasvar {TYPE_4__* sah; int * tdb_authalgxform; } ;
struct ah {int dummy; } ;
struct TYPE_5__ {scalar_t__ sa_family; } ;
struct TYPE_6__ {TYPE_1__ sa; } ;
struct TYPE_7__ {TYPE_2__ dst; } ;
struct TYPE_8__ {TYPE_3__ saidx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct secasvar*) ;
 int FUNC_1 (struct secasvar*) ;
 int FUNC_2 (int ,char*) ;
 size_t FUNC_3 (int,int) ;

size_t
FUNC_4(struct secasvar *VAR_1)
{
 size_t VAR_2;

 if (VAR_1 != ((void*)0)) {
  int VAR_3, VAR_4, VAR_5;

  FUNC_2(VAR_1->tdb_authalgxform != ((void*)0), ("null xform"));



  VAR_5 = sizeof(uint32_t);





  VAR_4 = FUNC_1(VAR_1);
  VAR_3 = FUNC_0(VAR_1);
  VAR_2 = FUNC_3(VAR_4 + VAR_3, VAR_5);
 } else {

  VAR_2 = sizeof (struct ah) + sizeof (u_int32_t) + 16;
 }
 return VAR_2;
}
