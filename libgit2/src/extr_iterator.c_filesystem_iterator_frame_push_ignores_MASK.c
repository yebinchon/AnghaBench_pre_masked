
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int path_len; int is_ignored; } ;
typedef TYPE_1__ filesystem_iterator_frame ;
struct TYPE_10__ {char* path; } ;
typedef TYPE_2__ filesystem_iterator_entry ;
struct TYPE_11__ {int ignores; int base; } ;
typedef TYPE_3__ filesystem_iterator ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *,char const*,int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
 filesystem_iterator *VAR_2,
 filesystem_iterator_entry *VAR_3,
 filesystem_iterator_frame *VAR_4)
{
 filesystem_iterator_frame *VAR_5;
 const char *VAR_6 = VAR_3 ? VAR_3->path : "";

 if (!FUNC_4(&VAR_2->base))
  return;

 if (FUNC_2(&VAR_4->is_ignored,
   &VAR_2->ignores, VAR_6, VAR_0) < 0) {
  FUNC_1();
  VAR_4->is_ignored = VAR_1;
 }


 if (VAR_3) {
  const char *VAR_7;

  VAR_5 = FUNC_0(VAR_2);


  VAR_7 = VAR_3->path + VAR_5->path_len;


  if (VAR_4->is_ignored <= VAR_1)
   VAR_4->is_ignored = VAR_5->is_ignored;

  FUNC_3(&VAR_2->ignores, VAR_7);
 }
}
