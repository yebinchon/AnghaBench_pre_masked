
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration {unsigned int entries_size; int rwlock; struct configuration* entries; struct configuration* socket_path; struct configuration* pidfile_path; } ;


 int FUNC_0 (void (*) (struct configuration*)) ;
 int FUNC_1 (void (*) (struct configuration*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct configuration) ;
 int FUNC_4 (struct configuration*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct configuration *VAR_0)
{
 unsigned int VAR_1;

 FUNC_0(FUNC_6);
 FUNC_2(VAR_0 != ((void*)0));
 FUNC_4(VAR_0->pidfile_path);
 FUNC_4(VAR_0->socket_path);

 for (VAR_1 = 0; VAR_1 < VAR_0->entries_size; ++VAR_1)
  FUNC_3(VAR_0->entries[VAR_1]);
 FUNC_4(VAR_0->entries);

 FUNC_5(&VAR_0->rwlock);
 FUNC_4(VAR_0);
 FUNC_1(FUNC_6);
}
