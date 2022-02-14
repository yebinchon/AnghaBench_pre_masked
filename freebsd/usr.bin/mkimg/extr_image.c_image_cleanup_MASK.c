
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct chunk* ptr; } ;
struct TYPE_4__ {int fd; } ;
struct TYPE_6__ {TYPE_2__ mem; TYPE_1__ file; } ;
struct chunk {int ch_type; TYPE_3__ ch_u; } ;




 struct chunk* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct chunk*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct chunk *VAR_4;

 while ((VAR_4 = FUNC_0(&VAR_1)) != ((void*)0)) {
  switch (VAR_4->ch_type) {
  case 129:

   if (VAR_4->ch_u.file.fd != -1)
    FUNC_2(VAR_4->ch_u.file.fd);
   break;
  case 128:
   FUNC_3(VAR_4->ch_u.mem.ptr);
   break;
  default:
   break;
  }
  FUNC_1(&VAR_1, VAR_4, VAR_0);
  FUNC_3(VAR_4);
 }
 if (VAR_2 != -1)
  FUNC_2(VAR_2);
 FUNC_4(VAR_3);
}
