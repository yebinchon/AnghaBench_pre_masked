
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct wacom {int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned int const,int ) ;
 int FUNC_2 (unsigned char*,void const*,unsigned int const) ;
 int FUNC_3 (int ,int ,unsigned char*,unsigned int const,int ) ;

__attribute__((used)) static int FUNC_4(struct wacom *VAR_5, int VAR_6, u8 VAR_7,
  const unsigned VAR_8, const void *VAR_9)
{
 unsigned char *VAR_10;
 int VAR_11, VAR_12;
 const unsigned VAR_13 = VAR_8 / 4;

 VAR_10 = FUNC_1(VAR_13 + 3 , VAR_1);
 if (!VAR_10)
  return -VAR_0;


 VAR_10[0] = VAR_3;
 VAR_10[1] = 1;
 VAR_12 = FUNC_3(VAR_5->hdev, VAR_2, VAR_10, 2,
      VAR_4);
 if (VAR_12 < 0)
  goto out;

 VAR_10[0] = VAR_7;
 VAR_10[1] = VAR_6 & 0x07;
 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  VAR_10[2] = VAR_11;
  FUNC_2(VAR_10 + 3, VAR_9 + VAR_11 * VAR_13, VAR_13);

  VAR_12 = FUNC_3(VAR_5->hdev, VAR_2,
       VAR_10, VAR_13 + 3, VAR_4);
  if (VAR_12 < 0)
   break;
 }


 VAR_10[0] = VAR_3;
 VAR_10[1] = 0;
 FUNC_3(VAR_5->hdev, VAR_2, VAR_10, 2,
    VAR_4);

out:
 FUNC_0(VAR_10);
 return VAR_12;
}
