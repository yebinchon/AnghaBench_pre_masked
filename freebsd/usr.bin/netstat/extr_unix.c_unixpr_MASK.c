
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct xunpgen {int xug_len; scalar_t__ xug_gen; scalar_t__ xug_count; } ;
struct xsocket {int dummy; } ;
struct xunpcb {scalar_t__ unp_gencnt; struct xsocket xu_socket; } ;





 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,char**) ;
 int FUNC_2 (int,char**) ;
 int * VAR_1 ;
 int FUNC_3 (struct xunpcb*,struct xsocket*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

void
FUNC_8(u_long VAR_2, u_long VAR_3, u_long VAR_4, u_long VAR_5,
    u_long VAR_6, bool *VAR_7)
{
 char *VAR_8;
 int VAR_9, VAR_10;
 struct xsocket *VAR_11;
 struct xunpgen *VAR_12, *VAR_13;
 struct xunpcb *VAR_14;
 u_long VAR_15;

 VAR_8 = ((void*)0);
 for (VAR_10 = 128; VAR_10 <= 129; VAR_10++) {
  if (VAR_0)
   VAR_9 = FUNC_2(VAR_10, &VAR_8);
  else {
   VAR_15 = 0;
   switch (VAR_10) {
   case 128:
    VAR_15 = VAR_5;
    break;

   case 130:
    VAR_15 = VAR_4;
    break;

   case 129:
    VAR_15 = VAR_6;
    break;
   }
   VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_15,
       &VAR_8);
  }
  if (VAR_9 == -1)
   continue;
  if (VAR_9 < 0)
   return;

  VAR_13 = VAR_12 = (struct xunpgen *)VAR_8;
  for (VAR_12 = (struct xunpgen *)((char *)VAR_12 + VAR_12->xug_len);
      VAR_12->xug_len > sizeof(struct xunpgen);
      VAR_12 = (struct xunpgen *)((char *)VAR_12 + VAR_12->xug_len)) {
   VAR_14 = (struct xunpcb *)VAR_12;
   VAR_11 = &VAR_14->xu_socket;


   if (VAR_14->unp_gencnt > VAR_13->xug_gen)
    continue;
   if (*VAR_7) {
    FUNC_7("socket");
    *VAR_7 = 0;
   }
   FUNC_6("socket");
   FUNC_3(VAR_14, VAR_11);
   FUNC_4("socket");
  }
  if (VAR_12 != VAR_13 && VAR_12->xug_gen != VAR_13->xug_gen) {
   if (VAR_13->xug_count > VAR_12->xug_count) {
    FUNC_5("Some {:type/%s} sockets may have "
        "been {:action/deleted}.\n",
        VAR_1[VAR_10]);
   } else if (VAR_13->xug_count < VAR_12->xug_count) {
    FUNC_5("Some {:type/%s} sockets may have "
        "been {:action/created}.\n",
        VAR_1[VAR_10]);
   } else {
    FUNC_5("Some {:type/%s} sockets may have "
        "been {:action/created or deleted}",
        VAR_1[VAR_10]);
   }
  }
  FUNC_0(VAR_8);
 }
}
