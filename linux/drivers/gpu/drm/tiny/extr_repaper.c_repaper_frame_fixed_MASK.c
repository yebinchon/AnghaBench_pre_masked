
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct repaper_epd {unsigned int height; } ;
typedef enum repaper_stage { ____Placeholder_repaper_stage } repaper_stage ;


 int FUNC_0 (struct repaper_epd*,unsigned int,int *,int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct repaper_epd *VAR_0, u8 VAR_1,
    enum repaper_stage VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->height; VAR_3++)
  FUNC_0(VAR_0, VAR_3, ((void*)0), VAR_1, ((void*)0), VAR_2);
}
