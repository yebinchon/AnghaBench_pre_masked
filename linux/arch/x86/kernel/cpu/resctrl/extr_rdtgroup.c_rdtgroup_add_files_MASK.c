
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rftype {unsigned long fflags; int name; } ;
struct kernfs_node {int dummy; } ;


 int FUNC_0 (struct rftype*) ;
 int FUNC_1 (struct kernfs_node*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct kernfs_node*,struct rftype*) ;
 int VAR_0 ;
 struct rftype* VAR_1 ;

__attribute__((used)) static int FUNC_5(struct kernfs_node *VAR_2, unsigned long VAR_3)
{
 struct rftype *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = VAR_1;
 VAR_7 = FUNC_0(VAR_1);

 FUNC_2(&VAR_0);

 for (VAR_5 = VAR_4; VAR_5 < VAR_4 + VAR_7; VAR_5++) {
  if ((VAR_3 & VAR_5->fflags) == VAR_5->fflags) {
   VAR_6 = FUNC_4(VAR_2, VAR_5);
   if (VAR_6)
    goto error;
  }
 }

 return 0;
error:
 FUNC_3("Failed to add %s, err=%d\n", VAR_5->name, VAR_6);
 while (--VAR_5 >= VAR_4) {
  if ((VAR_3 & VAR_5->fflags) == VAR_5->fflags)
   FUNC_1(VAR_2, VAR_5->name);
 }
 return VAR_6;
}
