
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct denode {int dummy; } ;
typedef int pbuf ;
struct TYPE_10__ {char* name; char* contents; int path; int type; struct TYPE_10__* child; TYPE_1__* inode; struct TYPE_10__* parent; struct TYPE_10__* next; } ;
typedef TYPE_2__ fsnode ;
struct TYPE_11__ {scalar_t__ curinode; } ;
typedef TYPE_3__ fsinfo_t ;
struct TYPE_9__ {int flags; scalar_t__ ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct denode* FUNC_2 (char*,struct denode*,TYPE_2__*) ;
 int * FUNC_3 (char*,struct denode*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (char*,int,char*,char const*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_3, struct denode *VAR_4, fsnode *VAR_5,
    fsnode *VAR_6, fsinfo_t *VAR_7)
{
 fsnode *VAR_8;
 char VAR_9[VAR_2];

 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_7 != ((void*)0));

 for (VAR_8 = VAR_5->next; VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
  if ((size_t)FUNC_4(VAR_9, sizeof(VAR_9), "%s/%s", VAR_3,
      VAR_8->name) >= sizeof(VAR_9)) {
   FUNC_6("path %s too long", VAR_9);
   return -1;
  }

  if ((VAR_8->inode->flags & VAR_0) == 0) {
   VAR_8->inode->flags |= VAR_0;
   if (VAR_8 != VAR_5) {
    VAR_7->curinode++;
    VAR_8->inode->ino = VAR_7->curinode;
    VAR_8->parent = VAR_6;
   }
  }

  if (VAR_8->inode->flags & VAR_1) {
   continue;
  }
  VAR_8->inode->flags |= VAR_1;

  if (VAR_8->child) {
   struct denode *VAR_10;
   if ((VAR_10 = FUNC_2(VAR_9, VAR_4, VAR_8)) == ((void*)0)) {
    FUNC_5("msdosfs_mkdire %s", VAR_9);
    return -1;
   }
   if (FUNC_7(VAR_9, VAR_10, VAR_8->child, VAR_8,
       VAR_7) == -1) {
    FUNC_5("msdos_populate_dir %s", VAR_9);
    return -1;
   }
   continue;
  } else if (!FUNC_0(VAR_8->type)) {
   FUNC_6("skipping non-regular file %s/%s", VAR_8->path,
       VAR_8->name);
   continue;
  }
  if (FUNC_3(VAR_8->contents ? VAR_8->contents : VAR_9, VAR_4,
      VAR_8) == ((void*)0)) {
   FUNC_5("msdosfs_mkfile %s", VAR_9);
   return -1;
  }
 }
 return 0;
}
