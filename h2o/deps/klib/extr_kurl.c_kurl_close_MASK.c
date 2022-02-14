
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fd; struct TYPE_4__* buf; scalar_t__ hdr; int multi; int curl; } ;
typedef TYPE_1__ kurl_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(kurl_t *VAR_0)
{
 if (VAR_0 == 0) return 0;
 if (VAR_0->fd < 0) {
  FUNC_3(VAR_0->multi, VAR_0->curl);
  FUNC_1(VAR_0->curl);
  FUNC_2(VAR_0->multi);
  if (VAR_0->hdr) FUNC_4(VAR_0->hdr);
 } else FUNC_0(VAR_0->fd);
 FUNC_5(VAR_0->buf);
 FUNC_5(VAR_0);
 return 0;
}
