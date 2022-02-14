
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {size_t len; char* buf; } ;
struct stat {int st_mode; } ;
struct cache_entry {int ce_mode; } ;
struct apply_state {TYPE_1__* repo; scalar_t__ check_index; } ;
struct TYPE_2__ {int index; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct apply_state*,char*) ;
 int VAR_2 ;
 struct cache_entry* FUNC_2 (int ,char*,size_t,int ) ;
 int FUNC_3 (char*,struct stat*) ;

__attribute__((used)) static int FUNC_4(struct apply_state *VAR_3, struct strbuf *VAR_4)
{
 do {
  unsigned int VAR_5;

  while (--VAR_4->len && VAR_4->buf[VAR_4->len] != '/')
   ;
  if (!VAR_4->len)
   break;
  VAR_4->buf[VAR_4->len] = '\0';
  VAR_5 = FUNC_1(VAR_3, VAR_4->buf);
  if (VAR_5 & VAR_1)
   return 1;
  if (VAR_5 & VAR_0)




   continue;


  if (VAR_3->check_index) {
   struct cache_entry *VAR_6;

   VAR_6 = FUNC_2(VAR_3->repo->index, VAR_4->buf,
            VAR_4->len, VAR_2);
   if (VAR_6 && FUNC_0(VAR_6->ce_mode))
    return 1;
  } else {
   struct stat VAR_7;
   if (!FUNC_3(VAR_4->buf, &VAR_7) && FUNC_0(VAR_7.st_mode))
    return 1;
  }
 } while (1);
 return 0;
}
