
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_adc {int * sample_freq_avail; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct device*) ;
 struct vf610_adc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct vf610_adc *VAR_4 = FUNC_2(FUNC_1(VAR_1));
 size_t VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->sample_freq_avail); VAR_6++)
  VAR_5 += FUNC_3(VAR_3 + VAR_5, VAR_0 - VAR_5,
   "%u ", VAR_4->sample_freq_avail[VAR_6]);


 VAR_3[VAR_5 - 1] = '\n';

 return VAR_5;
}
