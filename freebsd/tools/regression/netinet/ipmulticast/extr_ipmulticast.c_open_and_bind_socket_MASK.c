
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sa_len; } ;
struct TYPE_4__ {TYPE_3__ sa; } ;
typedef TYPE_1__ sockunion_t ;
typedef int optval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,TYPE_3__*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int,int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(sockunion_t *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = -1;

 VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_0);
 if (VAR_9 == -1) {
  FUNC_4("socket");
  return (-1);
 }

 if (VAR_5) {
  VAR_8 = 1;
  if (FUNC_2(VAR_9, VAR_3, VAR_4, &VAR_8,
      sizeof(VAR_8)) < 0) {
   FUNC_4("setsockopt SO_REUSEPORT");
   FUNC_1(VAR_9);
   return (-1);
  }
 }

 if (VAR_6 != ((void*)0)) {
  VAR_7 = FUNC_0(VAR_9, &VAR_6->sa, VAR_6->sa.sa_len);
  if (VAR_7 == -1) {
   FUNC_4("bind");
   FUNC_1(VAR_9);
   return (-1);
  }
 }

 return (VAR_9);
}
