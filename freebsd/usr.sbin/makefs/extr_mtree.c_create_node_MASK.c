
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_9__ {scalar_t__ type; int contents; int symlink; TYPE_3__* inode; struct TYPE_9__* parent; int name; } ;
typedef TYPE_2__ fsnode ;
struct TYPE_8__ {int st_mode; } ;
struct TYPE_10__ {TYPE_1__ st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,int) ;

__attribute__((used)) static fsnode *
FUNC_3(const char *VAR_3, u_int VAR_4, fsnode *VAR_5, fsnode *VAR_6)
{
 fsnode *VAR_7;

 VAR_7 = FUNC_0(1, sizeof(*VAR_7));
 VAR_7->name = FUNC_1(VAR_3);
 VAR_7->type = (VAR_4 == 0) ? VAR_6->type : VAR_4;
 VAR_7->parent = VAR_5;

 VAR_7->inode = FUNC_0(1, sizeof(*VAR_7->inode));


 FUNC_2(VAR_7->inode, VAR_6->inode, sizeof(*VAR_7->inode));
 VAR_7->inode->st.st_mode = (VAR_7->inode->st.st_mode & ~VAR_1) | VAR_7->type;

 if (VAR_7->type == VAR_0)
  VAR_7->symlink = VAR_6->symlink;
 else if (VAR_7->type == VAR_2)
  VAR_7->contents = VAR_6->contents;

 return (VAR_7);
}
