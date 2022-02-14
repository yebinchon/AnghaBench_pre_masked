
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_watermark_params {int guard_size; int max_wm; int default_wm; int cacheline_size; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(int VAR_0,
           const struct intel_watermark_params *VAR_1,
           int VAR_2, int VAR_3,
           unsigned int VAR_4)
{
 int VAR_5, VAR_6;







 VAR_5 = FUNC_2(VAR_0, VAR_3,
       VAR_4 / 100);
 VAR_5 = FUNC_0(VAR_5, VAR_1->cacheline_size) +
  VAR_1->guard_size;
 FUNC_1("FIFO entries required for mode: %d\n", VAR_5);

 VAR_6 = VAR_2 - VAR_5;
 FUNC_1("FIFO watermark level: %d\n", VAR_6);


 if (VAR_6 > VAR_1->max_wm)
  VAR_6 = VAR_1->max_wm;
 if (VAR_6 <= 0)
  VAR_6 = VAR_1->default_wm;
 if (VAR_6 <= 8)
  VAR_6 = 8;

 return VAR_6;
}
