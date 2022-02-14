
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sur40_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (struct sur40_state*,int ,int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct sur40_state *VAR_5)
{
 int VAR_6;
 u8 *VAR_7;

 VAR_7 = FUNC_1(24, VAR_1);
 if (!VAR_7) {
  VAR_6 = -VAR_0;
  goto error;
 }


 VAR_6 = FUNC_2(VAR_5, VAR_3, 0x00, VAR_7, 12);
 if (VAR_6 < 0)
  goto error;

 VAR_6 = FUNC_2(VAR_5, VAR_3, 0x01, VAR_7, 12);
 if (VAR_6 < 0)
  goto error;

 VAR_6 = FUNC_2(VAR_5, VAR_3, 0x02, VAR_7, 12);
 if (VAR_6 < 0)
  goto error;

 VAR_6 = FUNC_2(VAR_5, VAR_4, 0x00, VAR_7, 24);
 if (VAR_6 < 0)
  goto error;

 VAR_6 = FUNC_2(VAR_5, VAR_2, 0x00, VAR_7, 5);
 if (VAR_6 < 0)
  goto error;

 VAR_6 = FUNC_2(VAR_5, VAR_3, 0x03, VAR_7, 12);





error:
 FUNC_0(VAR_7);
 return VAR_6;
}
