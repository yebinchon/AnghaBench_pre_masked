
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_message {int flags; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;

int FUNC_2 (struct file_message *VAR_5, int VAR_6, char **VAR_7) {
  int VAR_8 = 0;
  unsigned char *VAR_9;
  int VAR_10, VAR_11;
  if (VAR_5->flags & VAR_1) { VAR_8++; }
  if (VAR_5->flags & VAR_2) { VAR_8 += 2; FUNC_0 (!(VAR_5->flags & VAR_1)); }
  if (VAR_5->flags & VAR_3) { VAR_8++; }
  VAR_11 = (VAR_5->flags >> 16) & VAR_0;
  FUNC_0 (!(VAR_11 & ~VAR_4));
  VAR_8 += FUNC_1 (VAR_11);
  FUNC_0 (VAR_6 >= sizeof (struct file_message) + VAR_8 * 4);
  VAR_9 = (unsigned char *) (VAR_5->data + VAR_8);
  VAR_10 = *VAR_9++;
  if (VAR_10 == 254) {
    VAR_10 = *((unsigned short *) VAR_9);
    VAR_9 += 2;
  } else if (VAR_10 == 255) {
    VAR_10 = *((int *) VAR_9);
    VAR_9 += 4;
    FUNC_0 (VAR_10 >= 0 && VAR_10 < VAR_6);
  }
  if (VAR_7) {
    *VAR_7 = (char *) VAR_9;
  }
  FUNC_0 (sizeof (struct file_message) + VAR_8*4 + VAR_10 <= VAR_6);
  return VAR_10;
}
