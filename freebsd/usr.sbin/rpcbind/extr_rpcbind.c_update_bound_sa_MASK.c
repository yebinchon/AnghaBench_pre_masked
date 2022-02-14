
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_family; } ;
typedef int hints ;


 int VAR_0 ;
 void** VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,struct addrinfo*,struct addrinfo**) ;
 int * VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (struct addrinfo*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct addrinfo VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_3 == 0)
  return;
 VAR_1 = FUNC_1(sizeof(*VAR_1) * VAR_3);
 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.ai_family = VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (FUNC_0(VAR_2[VAR_6], ((void*)0), &VAR_4, &VAR_5) != 0)
   continue;
  VAR_1[VAR_6] = FUNC_1(VAR_5->ai_addrlen);
  FUNC_2(VAR_1[VAR_6], VAR_5->ai_addr, VAR_5->ai_addrlen);
 }
}
