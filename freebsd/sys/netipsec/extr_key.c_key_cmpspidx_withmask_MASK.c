
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct TYPE_8__ {int sa_family; scalar_t__ sa_len; } ;
struct TYPE_7__ {int sin6_addr; int sin6_scope_id; int sin6_port; } ;
struct TYPE_6__ {int sin_addr; int sin_port; } ;
struct TYPE_9__ {TYPE_3__ sa; TYPE_2__ sin6; TYPE_1__ sin; } ;
struct secpolicyindex {scalar_t__ ul_proto; TYPE_4__ dst; int prefd; TYPE_4__ src; int prefs; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct secpolicyindex *VAR_2,
    struct secpolicyindex *VAR_3)
{

 if (VAR_2 == ((void*)0) && VAR_3 == ((void*)0))
  return 1;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return 0;

 if (VAR_2->src.sa.sa_family != VAR_3->src.sa.sa_family ||
     VAR_2->dst.sa.sa_family != VAR_3->dst.sa.sa_family ||
     VAR_2->src.sa.sa_len != VAR_3->src.sa.sa_len ||
     VAR_2->dst.sa.sa_len != VAR_3->dst.sa.sa_len)
  return 0;


 if (VAR_2->ul_proto != (u_int16_t)VAR_1
  && VAR_2->ul_proto != VAR_3->ul_proto)
  return 0;

 switch (VAR_2->src.sa.sa_family) {
 case 129:
  if (VAR_2->src.sin.sin_port != VAR_0
   && VAR_2->src.sin.sin_port != VAR_3->src.sin.sin_port)
   return 0;
  if (!FUNC_1(&VAR_2->src.sin.sin_addr,
      &VAR_3->src.sin.sin_addr, VAR_2->prefs))
   return 0;
  break;
 case 128:
  if (VAR_2->src.sin6.sin6_port != VAR_0
   && VAR_2->src.sin6.sin6_port != VAR_3->src.sin6.sin6_port)
   return 0;




  if (VAR_2->src.sin6.sin6_scope_id &&
      VAR_3->src.sin6.sin6_scope_id &&
      VAR_2->src.sin6.sin6_scope_id != VAR_3->src.sin6.sin6_scope_id)
   return 0;
  if (!FUNC_1(&VAR_2->src.sin6.sin6_addr,
      &VAR_3->src.sin6.sin6_addr, VAR_2->prefs))
   return 0;
  break;
 default:

  if (FUNC_0(&VAR_2->src, &VAR_3->src, VAR_2->src.sa.sa_len) != 0)
   return 0;
  break;
 }

 switch (VAR_2->dst.sa.sa_family) {
 case 129:
  if (VAR_2->dst.sin.sin_port != VAR_0
   && VAR_2->dst.sin.sin_port != VAR_3->dst.sin.sin_port)
   return 0;
  if (!FUNC_1(&VAR_2->dst.sin.sin_addr,
      &VAR_3->dst.sin.sin_addr, VAR_2->prefd))
   return 0;
  break;
 case 128:
  if (VAR_2->dst.sin6.sin6_port != VAR_0
   && VAR_2->dst.sin6.sin6_port != VAR_3->dst.sin6.sin6_port)
   return 0;




  if (VAR_2->dst.sin6.sin6_scope_id &&
      VAR_3->dst.sin6.sin6_scope_id &&
      VAR_2->dst.sin6.sin6_scope_id != VAR_3->dst.sin6.sin6_scope_id)
   return 0;
  if (!FUNC_1(&VAR_2->dst.sin6.sin6_addr,
      &VAR_3->dst.sin6.sin6_addr, VAR_2->prefd))
   return 0;
  break;
 default:

  if (FUNC_0(&VAR_2->dst, &VAR_3->dst, VAR_2->dst.sa.sa_len) != 0)
   return 0;
  break;
 }



 return 1;
}
