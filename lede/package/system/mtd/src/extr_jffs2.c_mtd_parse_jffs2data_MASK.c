
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_unknown_node {int magic; scalar_t__ nodetype; int totlen; } ;
struct jffs2_raw_dirent {int pino; scalar_t__ ino; scalar_t__ version; int nsize; scalar_t__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,char const*,int ) ;
 scalar_t__ VAR_4 ;

void FUNC_2(const char *VAR_5, const char *VAR_6)
{
 struct jffs2_unknown_node *VAR_7 = (struct jffs2_unknown_node *) VAR_5;
 unsigned int VAR_8 = 0;

 while (VAR_8 < VAR_1) {
  VAR_7 = (struct jffs2_unknown_node *) (VAR_5 + VAR_8);
  if (VAR_7->magic != 0x1985)
   break;

  VAR_8 += FUNC_0(VAR_7->totlen);
  if (VAR_7->nodetype == VAR_0) {
   struct jffs2_raw_dirent *VAR_9 = (struct jffs2_raw_dirent *) VAR_7;


   if (*VAR_6 && (VAR_9->pino == 1) && !FUNC_1((char *) VAR_9->name, VAR_6, VAR_9->nsize))
    VAR_4 = VAR_9->ino;


   if (VAR_2 < VAR_9->ino)
    VAR_2 = VAR_9->ino;
   if (VAR_3 < VAR_9->version)
    VAR_3 = VAR_9->version;
  }
 }
}
