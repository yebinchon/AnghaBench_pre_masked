
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom {int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (size_t const,int ) ;
 int FUNC_2 (int ,int ,unsigned char*,size_t const,int ) ;

__attribute__((used)) static int FUNC_3(struct wacom *VAR_5, unsigned char VAR_6)
{
 const size_t VAR_7 = 2;
 unsigned char *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8[0] = VAR_3;
 VAR_8[1] = VAR_6;

 VAR_9 = FUNC_2(VAR_5->hdev, VAR_2, VAR_8,
      VAR_7, VAR_4);
 FUNC_0(VAR_8);

 return VAR_9;
}
