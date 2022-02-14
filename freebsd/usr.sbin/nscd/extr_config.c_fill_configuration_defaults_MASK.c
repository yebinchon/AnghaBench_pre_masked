
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration {int socket_mode; int force_unlink; size_t entries_size; int * entries; int threads_num; int query_timeout; int * pidfile_path; int * socket_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (void (*) (struct configuration*)) ;
 int FUNC_1 (void (*) (struct configuration*)) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,size_t) ;
 size_t FUNC_7 (int ) ;

void
FUNC_8(struct configuration *VAR_11)
{
 size_t VAR_12, VAR_13;

 FUNC_0(FUNC_8);
 FUNC_2(VAR_11 != ((void*)0));

 if (VAR_11->socket_path != ((void*)0))
  FUNC_5(VAR_11->socket_path);

 VAR_12 = FUNC_7(VAR_2);
 VAR_11->socket_path = FUNC_3(1, VAR_12 + 1);
 FUNC_2(VAR_11->socket_path != ((void*)0));
 FUNC_6(VAR_11->socket_path, VAR_2, VAR_12);

 VAR_12 = FUNC_7(VAR_0);
 VAR_11->pidfile_path = FUNC_3(1, VAR_12 + 1);
 FUNC_2(VAR_11->pidfile_path != ((void*)0));
 FUNC_6(VAR_11->pidfile_path, VAR_0, VAR_12);

 VAR_11->socket_mode = VAR_4 | VAR_7 | VAR_10 |
  VAR_5 | VAR_8 | VAR_6 | VAR_9;
 VAR_11->force_unlink = 1;

 VAR_11->query_timeout = VAR_1;
 VAR_11->threads_num = VAR_3;

 for (VAR_13 = 0; VAR_13 < VAR_11->entries_size; ++VAR_13)
  FUNC_4(VAR_11->entries[VAR_13]);
 VAR_11->entries_size = 0;

 FUNC_1(FUNC_8);
}
