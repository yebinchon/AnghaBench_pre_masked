
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {char* i_private; int * i_fop; int * i_op; scalar_t__ i_size; } ;
struct dentry {int d_sb; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int VAR_1 ;
 struct inode* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct dentry* FUNC_13 (char const*,struct dentry*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_14 (char const*) ;

__attribute__((used)) static struct dentry *FUNC_15(struct dentry *VAR_4, const char *VAR_5,
     char *VAR_6, umode_t VAR_7)
{
 struct dentry *VAR_8;
 struct inode *VAR_9;

 FUNC_11(FUNC_5(VAR_4));
 VAR_8 = FUNC_13(VAR_5, VAR_4, FUNC_14(VAR_5));
 if (FUNC_2(VAR_8)) {
  VAR_8 = FUNC_1(-VAR_0);
  goto fail;
 }
 VAR_9 = FUNC_9(VAR_4->d_sb, VAR_7);
 if (!VAR_9) {
  FUNC_8(VAR_8);
  VAR_8 = FUNC_1(-VAR_0);
  goto fail;
 }
 if (FUNC_4(VAR_7)) {
  VAR_9->i_fop = &VAR_1;
  if (VAR_6)
   VAR_9->i_size = FUNC_14(VAR_6);
  else
   VAR_9->i_size = 0;
 } else if (FUNC_3(VAR_7)) {
  VAR_9->i_op = &VAR_2;
  VAR_9->i_fop = &VAR_3;
  FUNC_10(FUNC_5(VAR_4));
 } else
  FUNC_0();
 VAR_9->i_private = VAR_6;
 FUNC_6(VAR_8, VAR_9);
 FUNC_7(VAR_8);
fail:
 FUNC_12(FUNC_5(VAR_4));
 return VAR_8;
}
