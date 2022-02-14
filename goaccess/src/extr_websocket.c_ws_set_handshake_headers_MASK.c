
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int digest ;
struct TYPE_3__ {void* upgrade; int connection; void* ws_resp; int ws_accept; int ws_key; } ;
typedef TYPE_1__ WSHeaders ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (int *,int ,int) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (char*,size_t,int *) ;
 char* FUNC_6 (size_t) ;
 void* FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8 (WSHeaders * VAR_3)
{
  size_t VAR_4 = FUNC_4 (VAR_3->ws_key);
  size_t VAR_5 = FUNC_4 (VAR_1);
  size_t VAR_6 = VAR_4 + VAR_5;
  char *VAR_7 = FUNC_6 (VAR_4 + VAR_5 + 1);
  uint8_t VAR_8[VAR_0];

  FUNC_3 (VAR_8, 0, sizeof *VAR_8);

  FUNC_2 (VAR_7, VAR_3->ws_key, VAR_4);
  FUNC_2 (VAR_7 + VAR_4, VAR_1, VAR_5 + 1);

  FUNC_5 (VAR_7, VAR_6, VAR_8);


  VAR_3->ws_accept =
    FUNC_0 ((unsigned char *) VAR_8, sizeof (VAR_8));
  VAR_3->ws_resp = FUNC_7 (VAR_2);

  if (!VAR_3->upgrade)
    VAR_3->upgrade = FUNC_7 ("websocket");
  if (!VAR_3->connection)
    VAR_3->upgrade = FUNC_7 ("Upgrade");

  FUNC_1 (VAR_7);
}
