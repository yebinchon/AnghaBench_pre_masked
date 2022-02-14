
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ off0; scalar_t__ l_buf; scalar_t__ p_buf; int curl; int multi; int fd; } ;
typedef TYPE_1__ kurl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(kurl_t *VAR_2, int VAR_3)
{
 if (FUNC_3(VAR_2)) {
  if (VAR_3 && FUNC_4(VAR_2->fd, VAR_2->off0, VAR_1) != VAR_2->off0)
   return -1;
 } else {
  int VAR_4;
  VAR_4 = FUNC_2(VAR_2->multi, VAR_2->curl);
  VAR_4 = FUNC_0(VAR_2->curl, VAR_0, VAR_2->off0);
  VAR_4 = FUNC_1(VAR_2->multi, VAR_2->curl);
 }
 VAR_2->p_buf = VAR_2->l_buf = 0;
 return 0;
}
