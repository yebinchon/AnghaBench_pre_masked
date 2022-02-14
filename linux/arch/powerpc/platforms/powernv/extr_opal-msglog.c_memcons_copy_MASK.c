
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct memcons {int obuf_size; int obuf_phys; int out_pos; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (char*,size_t,int *,char const*,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;

ssize_t FUNC_7(struct memcons *VAR_4, char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 const char *VAR_8;
 ssize_t VAR_9;
 size_t VAR_10 = 0;
 uint32_t VAR_11, VAR_12;

 if (!VAR_4)
  return -VAR_1;

 VAR_11 = FUNC_1(FUNC_0(VAR_4->out_pos));



 FUNC_6();

 VAR_8 = FUNC_4(FUNC_2(VAR_4->obuf_phys));




 if (VAR_11 & VAR_3) {

  VAR_11 &= VAR_2;
  VAR_12 = FUNC_1(VAR_4->obuf_size) - VAR_11;

  VAR_9 = FUNC_3(VAR_5, VAR_7, &VAR_6,
    VAR_8 + VAR_11, VAR_12);

  if (VAR_9 < 0)
   goto out;

  VAR_10 = VAR_9;
  VAR_5 += VAR_10;
  VAR_7 -= VAR_10;
  VAR_6 -= VAR_12;

  if (VAR_7 <= 0)
   goto out;
 }


 if (VAR_11 > FUNC_1(VAR_4->obuf_size)) {
  FUNC_5("OPAL: memory console corruption. Aborting read.\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_7, &VAR_6, VAR_8, VAR_11);

 if (VAR_9 < 0)
  goto out;

 VAR_9 += VAR_10;
out:
 return VAR_9;
}
