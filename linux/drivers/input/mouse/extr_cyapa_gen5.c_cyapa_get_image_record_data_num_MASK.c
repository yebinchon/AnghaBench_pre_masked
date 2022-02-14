
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int* data; int size; } ;
struct cyapa_tsg_bin_image_data_record {int dummy; } ;



__attribute__((used)) static struct cyapa_tsg_bin_image_data_record *
FUNC_0(const struct firmware *VAR_0,
  int *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->data[0] + 1;
 *VAR_1 = (VAR_0->size - VAR_2) /
   sizeof(struct cyapa_tsg_bin_image_data_record);
 return (struct cyapa_tsg_bin_image_data_record *)&VAR_0->data[VAR_2];
}
