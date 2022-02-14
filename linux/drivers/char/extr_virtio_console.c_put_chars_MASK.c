
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct port*,struct scatterlist*,int,int,void*,int) ;
 int FUNC_1 (int ,char const*,int) ;
 struct port* FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (char const*,int,int ) ;
 int FUNC_5 (struct scatterlist*,void*,int) ;
 scalar_t__ FUNC_6 (int (*) (int ,char const*,int)) ;

__attribute__((used)) static int FUNC_7(u32 VAR_3, const char *VAR_4, int VAR_5)
{
 struct port *VAR_6;
 struct scatterlist VAR_7[1];
 void *VAR_8;
 int VAR_9;

 if (FUNC_6(FUNC_1))
  return FUNC_1(VAR_3, VAR_4, VAR_5);

 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_5(VAR_7, VAR_8, VAR_5);
 VAR_9 = FUNC_0(VAR_6, VAR_7, 1, VAR_5, VAR_8, 0);
 FUNC_3(VAR_8);
 return VAR_9;
}
