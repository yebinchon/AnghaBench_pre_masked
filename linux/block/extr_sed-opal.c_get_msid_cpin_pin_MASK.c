
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_dev {size_t prev_d_len; int prev_data; int parsed; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct opal_dev*,int ,int ) ;
 int FUNC_1 (char const*,size_t,int ) ;
 int * VAR_5 ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (int *,int,char const**) ;

__attribute__((used)) static int FUNC_4(struct opal_dev *VAR_6, void *VAR_7)
{
 const char *VAR_8;
 size_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, VAR_5[VAR_2], VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_3(&VAR_6->parsed, 4, &VAR_8);
 if (!VAR_8) {
  FUNC_2("Couldn't extract MSID_CPIN from response\n");
  return VAR_3;
 }

 VAR_6->prev_data = FUNC_1(VAR_8, VAR_9, VAR_1);
 if (!VAR_6->prev_data)
  return -VAR_0;

 VAR_6->prev_d_len = VAR_9;

 return 0;
}
