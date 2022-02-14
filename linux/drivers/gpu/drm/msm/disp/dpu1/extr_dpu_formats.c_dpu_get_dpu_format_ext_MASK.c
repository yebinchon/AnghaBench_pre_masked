
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct TYPE_2__ {size_t const pixel_format; } ;
struct dpu_format {TYPE_1__ base; } ;
typedef size_t ssize_t ;


 size_t FUNC_0 (struct dpu_format*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct dpu_format const*) ;
 int FUNC_4 (struct dpu_format const*) ;

 struct dpu_format* VAR_0 ;
 struct dpu_format* VAR_1 ;

const struct dpu_format *FUNC_5(
  const uint32_t VAR_2,
  const uint64_t VAR_3)
{
 uint32_t VAR_4 = 0;
 const struct dpu_format *VAR_5 = ((void*)0);
 const struct dpu_format *VAR_6 = ((void*)0);
 ssize_t VAR_7 = 0;





 FUNC_1("plane format modifier 0x%llX\n", VAR_3);

 switch (VAR_3) {
 case 0:
  VAR_6 = VAR_0;
  VAR_7 = FUNC_0(VAR_0);
  break;
 case 128:
  VAR_6 = VAR_1;
  VAR_7 = FUNC_0(VAR_1);
  FUNC_1("found fmt: %4.4s  DRM_FORMAT_MOD_QCOM_COMPRESSED\n",
    (char *)&VAR_2);
  break;
 default:
  FUNC_2("unsupported format modifier %llX\n", VAR_3);
  return ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  if (VAR_2 == VAR_6[VAR_4].base.pixel_format) {
   VAR_5 = &VAR_6[VAR_4];
   break;
  }
 }

 if (VAR_5 == ((void*)0))
  FUNC_2("unsupported fmt: %4.4s modifier 0x%llX\n",
   (char *)&VAR_2, VAR_3);
 else
  FUNC_1("fmt %4.4s mod 0x%llX ubwc %d yuv %d\n",
    (char *)&VAR_2, VAR_3,
    FUNC_3(VAR_5),
    FUNC_4(VAR_5));

 return VAR_5;
}
