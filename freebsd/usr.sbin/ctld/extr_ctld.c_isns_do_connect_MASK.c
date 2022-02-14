
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isns {int i_addr; TYPE_1__* i_ai; } ;
struct TYPE_2__ {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct isns *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0->i_ai->ai_family, VAR_0->i_ai->ai_socktype,
     VAR_0->i_ai->ai_protocol);
 if (VAR_1 < 0) {
  FUNC_2("socket(2) failed for %s", VAR_0->i_addr);
  return (-1);
 }
 if (FUNC_1(VAR_1, VAR_0->i_ai->ai_addr, VAR_0->i_ai->ai_addrlen)) {
  FUNC_2("connect(2) failed for %s", VAR_0->i_addr);
  FUNC_0(VAR_1);
  return (-1);
 }
 return(VAR_1);
}
