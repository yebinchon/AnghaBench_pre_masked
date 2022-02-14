
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ private; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long,char*,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct seq_file*,char*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_4, void *VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7 = (unsigned long)VAR_4->private;
 char *VAR_8;

 VAR_8 = (char *)FUNC_0(VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_7, VAR_8, VAR_3);

 if ((VAR_6 >> 61) == 0) {
  FUNC_3(VAR_4, VAR_8, VAR_6);
  VAR_6 = 0;
 } else
  VAR_6 = -VAR_0;
 FUNC_2((unsigned long)VAR_8);
 return VAR_6;
}
