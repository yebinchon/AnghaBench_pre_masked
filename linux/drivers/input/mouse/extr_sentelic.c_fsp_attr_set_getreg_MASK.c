
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct fsp_data* private; } ;
struct fsp_data {unsigned int last_reg; unsigned int last_val; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct psmouse*,unsigned int,unsigned int*) ;
 int FUNC_1 (char const*,int,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_2, void *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct fsp_data *VAR_6 = VAR_2->private;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_4, 16, &VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_7 > 0xff)
  return -VAR_0;

 if (FUNC_0(VAR_2, VAR_7, &VAR_8))
  return -VAR_1;

 VAR_6->last_reg = VAR_7;
 VAR_6->last_val = VAR_8;

 return VAR_5;
}
