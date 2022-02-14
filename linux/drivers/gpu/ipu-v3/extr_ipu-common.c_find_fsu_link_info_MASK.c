
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chno; } ;
struct TYPE_3__ {int chno; } ;
struct fsu_link_info {TYPE_2__ sink; TYPE_1__ src; } ;


 int FUNC_0 (struct fsu_link_info const*) ;
 struct fsu_link_info const* VAR_0 ;

__attribute__((used)) static const struct fsu_link_info *FUNC_1(int VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_1 == VAR_0[VAR_3].src.chno &&
      VAR_2 == VAR_0[VAR_3].sink.chno)
   return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
