
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* data; int offset; } ;
typedef TYPE_1__ gitno_buffer ;
typedef int git_pkt_type ;
struct TYPE_10__ {int type; } ;
typedef TYPE_2__ git_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__**,char const**,char const*,int ) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(git_pkt **VAR_3, git_pkt_type *VAR_4, gitno_buffer *VAR_5)
{
 const char *VAR_6 = VAR_5->data, *VAR_7 = VAR_6;
 git_pkt *VAR_8 = ((void*)0);
 int VAR_9 = 0, VAR_10;

 do {
  if (VAR_5->offset > 0)
   VAR_9 = FUNC_2(&VAR_8, &VAR_7, VAR_6, VAR_5->offset);
  else
   VAR_9 = VAR_0;

  if (VAR_9 == 0)
   break;

  if (VAR_9 < 0 && VAR_9 != VAR_0)
   return VAR_9;

  if ((VAR_10 = FUNC_4(VAR_5)) < 0) {
   return VAR_10;
  } else if (VAR_10 == 0) {
   FUNC_1(VAR_2, "early EOF");
   return VAR_1;
  }
 } while (VAR_9);

 FUNC_3(VAR_5, VAR_7);
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_8->type;
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_8;
 else
  FUNC_0(VAR_8);

 return VAR_9;
}
