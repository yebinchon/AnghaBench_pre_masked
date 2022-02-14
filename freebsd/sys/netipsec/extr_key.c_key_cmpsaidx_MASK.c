
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sa_len; } ;
struct TYPE_6__ {TYPE_1__ sa; } ;
struct secasindex {scalar_t__ proto; scalar_t__ mode; scalar_t__ reqid; TYPE_3__ dst; TYPE_3__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(const struct secasindex *VAR_4, const struct secasindex *VAR_5,
    int VAR_6)
{


 if (VAR_4 == ((void*)0) && VAR_5 == ((void*)0))
  return 1;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return 0;

 if (VAR_4->proto != VAR_5->proto)
  return 0;

 if (VAR_6 == VAR_0) {
  if (VAR_4->mode != VAR_5->mode)
   return 0;
  if (VAR_4->reqid != VAR_5->reqid)
   return 0;
  if (FUNC_0(&VAR_4->src, &VAR_5->src,
      VAR_4->src.sa.sa_len) != 0 ||
      FUNC_0(&VAR_4->dst, &VAR_5->dst,
      VAR_4->dst.sa.sa_len) != 0)
   return 0;
 } else {


  if (VAR_6 == VAR_1 || VAR_6 == VAR_2) {




   if (VAR_5->reqid != 0 &&
       VAR_4->reqid != VAR_5->reqid)
    return 0;
  }

  if (VAR_6 == VAR_1) {
   if (VAR_4->mode != VAR_3
    && VAR_4->mode != VAR_5->mode)
    return 0;
  }

  if (FUNC_1(&VAR_4->src.sa, &VAR_5->src.sa, 0) != 0)
   return 0;
  if (FUNC_1(&VAR_4->dst.sa, &VAR_5->dst.sa, 0) != 0)
   return 0;
 }

 return 1;
}
