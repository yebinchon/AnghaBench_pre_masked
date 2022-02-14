
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau7802_state {int * scale_avail; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct device*) ;
 struct nau7802_state* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct nau7802_state *VAR_4 = FUNC_2(FUNC_1(VAR_1));
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->scale_avail); VAR_5++)
  VAR_6 += FUNC_3(VAR_3 + VAR_6, VAR_0 - VAR_6, "0.%09d ",
     VAR_4->scale_avail[VAR_5]);

 VAR_3[VAR_6-1] = '\n';

 return VAR_6;
}
